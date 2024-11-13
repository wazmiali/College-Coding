import psycopg2

# Connect to PostgreSQL database
conn = psycopg2.connect(
    dbname="your_database_name",
    user="your_username",
    password="your_password",
    host="localhost",
    port="your_port"
)

# Create a cursor object to execute SQL queries
cursor = conn.cursor()

# Example: Creating a table
cursor.execute('''
    CREATE TABLE IF NOT EXISTS users (
        id SERIAL PRIMARY KEY,
        username VARCHAR(50),
        email VARCHAR(100)
    )
''')

# Example: Inserting data
cursor.execute("INSERT INTO users (username, email) VALUES (%s, %s)", ('john_doe', 'john@example.com'))

# Commit the changes
conn.commit()

# Close the connection
conn.close()
