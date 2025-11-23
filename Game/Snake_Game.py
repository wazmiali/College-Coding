# Snake Game
import pygame
import time

import random
pygame.init()

width, height = 640, 480
window = pygame.display.set_mode((width, height))
pygame.display.set_caption("Snake Game")

black = pygame.Color(0, 0, 0)
white = pygame.Color(255, 255, 255)
red = pygame.Color(255, 0, 0)
green = pygame.Color(0, 255, 0)

snake_position = [100, 50]
snake_body = [[100, 50], [90, 50], [80, 50]]
food_position = [
    random.randrange(1, (width // 10)) * 10,
    random.randrange(1, (height // 10)) * 10,
]
food_spawn = True

clock = pygame.time.Clock()

direction = "RIGHT"
change_to = direction
score = 0

def game_over():
    font = pygame.font.SysFont("Arial", 30)
    game_over_text = font.render("Game Over!", True, red)
    game_over_rect = game_over_text.get_rect()
    game_over_rect.midtop = (width / 2, height / 4)
    window.blit(game_over_text, game_over_rect)
    pygame.display.flip()
    time.sleep(2)
    pygame.quit()
    quit()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            quit()
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT or event.key == ord("d"):
                change_to = "RIGHT"
            if event.key == pygame.K_LEFT or event.key == ord("a"):
                change_to = "LEFT"
            if event.key == pygame.K_UP or event.key == ord("w"):
                change_to = "UP"
            if event.key == pygame.K_DOWN or event.key == ord("s"):
                change_to = "DOWN"

    if change_to == "RIGHT" and direction != "LEFT":
        direction = "RIGHT"
    if change_to == "LEFT" and direction != "RIGHT":
        direction = "LEFT"
    if change_to == "UP" and direction != "DOWN":
        direction = "UP"
    if change_to == "DOWN" and direction != "UP":
        direction = "DOWN"

    if direction == "RIGHT":
        snake_position[0] += 10
    if direction == "LEFT":
        snake_position[0] -= 10
    if direction == "UP":
        snake_position[1] -= 10
    if direction == "DOWN":
        snake_position[1] += 10

    snake_body.insert(0, list(snake_position))
    if snake_position[0] == food_position[0] and snake_position[1] == food_position[1]:
        score += 1
        food_spawn = False
    else:
        snake_body.pop()

    if not food_spawn:
        food_position = [
            random.randrange(1, (width // 10)) * 10,
            random.randrange(1, (height // 10)) * 10,
        ]
        import random
    food_spawn = True

    window.fill(black)
    for pos in snake_body:
        pygame.draw.rect(window, green, pygame.Rect(pos[0], pos[1], 10, 10))
    pygame.draw.rect(
        window, white, pygame.Rect(food_position[0], food_position[1], 10, 10)
    )

    if snake_position[0] < 0 or snake_position[0] > width - 10:
        game_over()
    if snake_position[1] < 0 or snake_position[1] > height - 10:
        game_over()
    for block in snake_body[1:]:
        if snake_position[0] == block[0] and snake_position[1] == block[1]:
            game_over()

    pygame.display.update()
    clock.tick(15)

