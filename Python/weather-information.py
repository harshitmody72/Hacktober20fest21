import requests
import json

# input city and get weather information
city = input("Enter City: ")


api_key  ="c6da798dc76b00c38a31c1d4bad1daf5"
url = f"http://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}"

res = requests.get(url)
json_data = json.loads(res.text)

weather = json_data["weather"][0]["description"]
temperature = json_data["main"]["temp"]
humidity  =json_data["main"]["humidity"]
wind_speed = json_data["wind"]["speed"]

print("Weather: ",weather)
print("Temperature: ", temperature)
print("Humidity: ",humidity)
print("Wind_speed: ", wind_speed)
