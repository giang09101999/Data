import pandas as pd 

Dictionary_data = {
    "Player 1":{
        "Speed": 90,
        "Dribbling": 90,
        "Sprint": 90,
        "Header": 90,
        "Finish": 90,
        "Pass": 80
    },

    "Player 2":{
        "Speed": 88,
        "Dribbling": 95,
        "Sprint": 88,
        "Header": 78,
        "Finish": 90,
        "Pass": 89
    },

    "Player 3":{
        "Speed": 88,
        "Dribbling": 90,
        "Sprint": 88,
        "Header": 82,
        "Finish": 90,
        "Pass": 88
    }
}

data = pd.DataFrame(Dictionary_data)
print(data)