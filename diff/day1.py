
def test(x, y):
    try:
        if type(x) != int() and type(y) != int():
            return Exception("Data type is incorrect")
        return x*y
    except Exception:
        # print(f"Error message{e}")
        print("here")
print(type('3'))
print(test(3,'4')) 