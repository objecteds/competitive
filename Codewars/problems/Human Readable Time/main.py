import math
def make_readable(seconds):
    hours = math.floor(seconds/60/60)
    minutes = math.floor((seconds-hours*60*60)/60)
    sec = seconds-hours*60*60-minutes*60
    return f"{hours if hours > 9 else '0'+str(hours)}:{minutes if minutes > 9 else '0'+str(minutes)}:{sec if sec > 9 else '0'+str(sec)}"