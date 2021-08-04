def remove_vowels_from_string(s):
    return s.translate(str.maketrans('','', 'aeiouAEIOU'))

def novowelsort(the_list):
  # TODO perform no vowel sort on `the_list`.
  the_list = sorted(the_list, key=remove_vowels_from_string)
  return the_list
  


if __name__ == '__main__':
  # Example calls to your function.
  print(novowelsort(['alpha', 'beta']))
  print(novowelsort(['once', 'upon', 'abc', 'time', 'there', 'were', 'some', 'words']))