python for generating calender for given month and year


import calendar

def generate_calendar(year, month):
  # Create a calendar object using the calendar module
  cal = calendar.monthcalendar(year, month)

  # Print the header of the calendar
  print("Mo Tu We Th Fr Sa Su")

  # Iterate over each week of the month
  for week in cal:
    # Iterate over each day of the week
    for day in week:
      # If the day is 0, it means the day is not part of the current month
      # so we print empty space
      if day == 0:
        print("   ", end="")
      else:
        # Otherwise, we print the day with a space after it
        print(f"{day:2} ", end="")
    # Print a new line after each week
    print()

# Example usage
generate_calendar(2023, 2)

