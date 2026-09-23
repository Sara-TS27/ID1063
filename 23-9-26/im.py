from PIL import Image

# 1. Exact path to your selfie on your phone
input_path = "/sdcard/DCIM/Camera/IMG_20260923_173000.jpg"

# 2. Open the original image
img = Image.open(input_path)

# 3. Save a copy of the original selfie into your current repo folder
img.save("selfie_input.jpg")

# 4. Convert to grayscale
gray_img = img.convert("L")

# 5. Save the grayscale version into your current repo folder
gray_img.save("selfie_grayscale.jpg")

print("Both original and grayscale images saved to your repository folder!")


