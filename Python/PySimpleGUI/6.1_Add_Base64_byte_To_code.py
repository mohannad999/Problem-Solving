import PySimpleGUI as sg

flower_base64 = b'iVBORw0KGgoAAAANSUhEUgAAAB4AAAAeCAYAAAA7MK6iAAADFklEQVR4nLWXz29MURTHPzOjlEiqGyLSllKJDf9B2dSPaitpMrEgYmwJC+w0qlHiH/BrI7GysSB+JBJ/QCVsBQlKFVURiwmd6bxncc+Zd+b2vpkpdZOb+96953y/9/y4590H6S3jPbcCOeAcUAHK0ivAiKy1BvQW1VQhJ92250AMzEuPgReejNVrijxjBNvMfDtQAO4BJSASwliey8B9kWk3eophcYOkWXm+CnwBzgIngSlD1KhPAaeAM4JxTTCzIXK7oxspgNa1amlUZ932m2mWZ4FlsruYxJ0KVpF5TaqKAfXnKkYvEqwYuC4c6tWamM6JogW2FjVyc0hG8eaANR5nNQNPBwCsS98C48AuoFP6TuAC8KZOCGJczC0XiAsAjnvCkbH+EtBidDqBLvO+Chg1VkYe1gmPqxrwNmDGU1Slgsh2AbeAz0ZuBthhNnDYENqNfxOOaoJptTnq7VDHywLYB3ynNnYxMC3WZ4GVIjuWglUgqYLV9pCkGCjoJLAC2AT8JMl4BXoPdPsuFJ13ZoNq/SNLeB6YEEKNS1nGcZG5bUg1eaaBHllfLuN6YLtntWKpURPCGTwWanGvWDJLEi8FGhOC1TJuBj4CP3BJ2Oth+Z0yC4+Pjh24+IWOx13jtR7PtV2i62NWK5yNi7aMCGgSlKgtczlZHxby18AxYK2Q5ox+3Zbm5nlgm8h8auA2e3xmceGp6+osLtDPSFyYEeFDwEtgPy6OUcCKCrXFJgM8lrndIhMZA+eFa9SCPCDJwoMyN4CrsX7stcBo1w9BEdiCy/JJY3HwOGkBKYhgXuaHhNRWH5skfi8CB0T3orEwtYCo+9YBg/I8GCDVsYQ7w0r4FbhDkg9HSMpt3ZKpTV+sey1pJPMDuMzdiDtq2nLG0qY+EvalGVKArULcjavhV0jOcdOfRSXtJ+xeJR0SuTzwm3CcF30R2NuAVGOfD4D/9dWnD/jVhHuHWXg1+qfL3ocmSPsNSL0jFbOI662NjT0y/bLeAmzgP1zon3qkRWCfrIU+Ikv2C9MBPMHF+RWwJ0C65D9tfwCgQwKDm4kzlAAAAABJRU5ErkJggg=='

layout = [[sg.Text('Base64 Button Demo')],
          [sg.Button('', image_data=flower_base64, button_color=(sg.theme_background_color(), sg.theme_background_color()), border_width=0, key='Exit')]]

window = sg.Window('Flowers!', layout, no_titlebar=True)

while True:             # Event Loop
    event, values = window.read()
    print(event, values)
    if event in (sg.WIN_CLOSED, 'Exit'):
        break
window.close()
