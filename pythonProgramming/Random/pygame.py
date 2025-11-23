# Game
import pygame
import sys
import random

# Initialize Pygame
pygame.init()

# Screen dimensions
screen_width = 800
screen_height = 600

# Function to generate a random color
def random_color():
    return (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255))

# Function to create a random circle
def draw_random_circle(surface):
    radius = random.randint(10, 50)
    x = random.randint(radius, screen_width - radius)
    y = random.randint(radius, screen_height - radius)
    color = random_color()

    pygame.draw.circle(surface, color, (x, y), radius)

# Create the screen
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Random Circles")

# Main loop
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Clear the screen
    screen.fill((255, 255, 255))

    # Draw random circles
    for _ in range(10):
        draw_random_circle(screen)

    # Update the display
    pygame.display.flip()

    # Add a small delay to control the frame rate
    pygame.time.delay(500)

# Note: This program will continue running until you close the window. You can exit by clicking the close button on the window.

