import discord

def read_token():
    with open("/home/kartickgupta/Kartick/CoderForNow/python/discord-bots/token.txt") as f:
        lines = f.readlines()
        return lines[0].strip()

token = read_token()
# print(token)

client = discord.Client()

@client.event
async def on_message(message):
    print(message.content)
    if message.content.find('!hello') != -1:
        await message.channel.send(f'Hi {message.author}, I\'m a bot')

client.run(token)