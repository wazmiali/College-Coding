import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
import schedule
import time
import logging

# Configure logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

# Email configuration
EMAIL_ADDRESS = 'wazmiali86@gmail.com'
EMAIL_PASSWORD = 'wazmi262406'
SMTP_SERVER = 'smtp.gmail.com'
SMTP_PORT = 587

def send_email_report():
    logging.info("Starting to send email report.")
    # Create the email content
    msg = MIMEMultipart()
    msg['From'] = EMAIL_ADDRESS
    msg['To'] = 'recipient_email@gmail.com'
    msg['Subject'] = 'Daily Report'

    # Add body to email
    body = 'This is your daily report.'
    msg.attach(MIMEText(body, 'plain'))

    # Send the email
    try:
        server = smtplib.SMTP(SMTP_SERVER, SMTP_PORT)
        logging.info("SMTP server connection established.")
        server.starttls()
        server.login(EMAIL_ADDRESS, EMAIL_PASSWORD)
        logging.info("Logged into SMTP server.")
        text = msg.as_string()
        server.sendmail(EMAIL_ADDRESS, 'recipient_email@gmail.com', text)
        server.quit()
        logging.info('Email sent successfully')
    except Exception as e:
        logging.error(f'Failed to send email: {e}')

# Schedule the email to be sent daily at 8:00 AM
schedule.every().day.at("08:00").do(send_email_report)

if __name__ == "__main__":
    logging.info("Scheduler started...")
    while True:
        schedule.run_pending()
        time.sleep(1)
