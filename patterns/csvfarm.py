import pandas as pd
import numpy as np
import random

# Create a list of exercise names
exercises = ["Pushups", "Squats", "Bench Press", "Bicep Curls"]

# Create an empty DataFrame
df = pd.DataFrame(columns=["Day", "Exercise", "Sets", "Repetitions", "Time (minutes)"])

# Generate random data for 100 days
for day in range(1, 101):
    for exercise in exercises:
        sets = random.randint(3, 5)
        repetitions = random.randint(8, 15)
        time_per_set = round(random.uniform(0.5, 2.0), 2)  # Random time between 0.5 to 2.0 minutes
        df = df.append({
            "Day": day,
            "Exercise": exercise,
            "Sets": sets,
            "Repetitions": repetitions,
            "Time (minutes)": time_per_set
        }, ignore_index=True)


df.to_excel(r"D:\Programming\datahack2.0\farmlmao.xlsx", index=True)