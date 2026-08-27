import pandas as pd

csv_path = r"C:\Users\syske\Downloads\Iris.csv"
df = pd.read_csv(csv_path)

# # Display rows where "Species" is "Iris-setosa"
# print("Rows where species is 'Iris-setosa':\n")
# print(df[df["Species"] == "Iris-setosa"])

# # Display rows where "SepalWidthCm" > 3.5 and "Species" is "Iris-setosa"
# print("\nRows where SepalWidthCm > 3.5 and species is 'Iris-setosa':\n")
# print(df[(df["SepalWidthCm"] > 3.5) & (df["Species"] == "Iris-setosa")])

# # Rename the column "SepalWidthCm" to "Sepal_Width"
# df = df.rename(columns={"SepalWidthCm": "Sepal_Width"})

# # Add new column "SepalArea" calculated as SepalLengthCm * SepalWidthCm and display in the dataset
# df["SepalArea"] = df["SepalLengthCm"] * df["Sepal_Width"]

# # Drop duplicate rows in the dataset
# df = df.drop_duplicates()

# # Replace all occurrences of "Iris-setosa" with "Setosa" in the "Species" column
# df["Species"] = df["Species"].replace("Iris-setosa", "Setosa")

# # Save the DataFrame to a new CSV file named "Cleaned_modified.csv"
# df.to_csv("Cleaned_modified.csv", index=False)

# # How can you sort the DataFrame by "SepalWidthCm" in ascending order?
# df.sort_values("Sepal_Width", ascending=True)

# # How can you sort the DataFrame by "SepalWidthCm" in descending order
# df.sort_values("Sepal_Width", ascending=False)

# # How to check duplicate rows in the DataFrame?
# df.duplicated()

# # How to check if they exist?
# df.duplicated().any()

# # Remove duplicate rows from the DataFrame
# df.drop_duplicates()

# Save to Excel file
df.to_excel("iris.xlsx", index=False, engine='openpyxl')

# # Drop rows containing missing values in the DataFrame
# df.dropna()

# # Fill missing values in SepalWidthCm with the column mean
# df["Sepal_Width"].fillna(df["Sepal_Width"].mean(), inplace=True)

# # Count the number of samples per species
# df["Species"].value_counts()