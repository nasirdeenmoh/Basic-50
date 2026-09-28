length = int(input("Please enter the length of the rectangle>  "))
width = int(input("Enter the width of the circle>  "))

if length == width:
    print("This aint a rectangle brodie, who u tryna scamm.. they cant have equal sides")
else:
    area = length * width
    perimeter = (length+width) * 2



    print(f"This rectangle has an area of {area} and a perimeter of {perimeter}")
