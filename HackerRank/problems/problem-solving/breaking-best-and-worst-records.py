def breakingRecords(scores):
    least = scores[0]
    most = scores[0]
    records = [0, 0]

    for i in range(1, len(scores)):
        if scores[i] < least:
            least = scores[i]
            records[1] += 1
        elif scores[i] > most:
            most = scores[i]
            records[0] += 1

    return records
