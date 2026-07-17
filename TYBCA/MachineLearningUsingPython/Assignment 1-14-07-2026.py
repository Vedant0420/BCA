import pandas as pd

csv_path = r"C:\Users\syske\Downloads\Iris.csv"
df = pd.read_csv(csv_path)

print("1. First 5 rows:\n")
print(df.head())

print("\n2. Random sample of 5 rows:\n")
print(df.sample(5))

print("\n3. Rows and columns:")
print(f"Rows: {df.shape[0]}, Columns: {df.shape[1]}")

print("\n4. Column names:")
print(list(df.columns))

print("\n5. Data types:\n")
print(df.dtypes)

print("\n6. Missing values in each column:\n")
print(df.isnull().sum())

print("\n7. Unique species:\n")
print(df["Species"].unique())

print("\n8. Count of each species:\n")
print(df["Species"].value_counts())

print("\n9. Mean, median, and standard deviation of SepalWidthCm:\n")
print("Mean:", df["SepalWidthCm"].mean())
print("Median:", df["SepalWidthCm"].median())
print("Standard Deviation:", df["SepalWidthCm"].std())

print("\n10. DataFrame without Id column:\n")
if "Id" in df.columns:
	print(df.drop(columns=["Id"]))
else:
	print(df)
