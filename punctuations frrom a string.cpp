python for removing  punctuations from a string


def remove_punctuation(input_string):
    # Define a string of punctuation characters
    punct = "!\"#$%&'()*+,-./:;<=>?@[\]^_`{|}~"

    # Use translate() method to remove punctuation characters
    no_punct = input_string.translate(str.maketrans("", "", punct))

    return no_punct

# Test the function
input_string = "Hello, World! How are you today?"
print(remove_punctuation(input_string))
# Output: Hello World How are you today

