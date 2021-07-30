# Problem Statement

A conservation initiative has volunteers surveying plants in a coastal region.

Ask volunteers record which plant they were counting that day and how many they counted, then print an appropriate message.

Ferns have been declining in the region, so the initiative wants to encourage people to count ferns.

If a volunteer counts a plant **containing the string** `'fern'` with any capitalisation, your program should say:

    Which plant did you survey? Maidenhair Fern
    Count: 7
    Fantastic! Keep looking for ferns!

For a non-fern plant with a count fewer than 6 it should say:

    Which plant did you survey? LILLY PILLY
    Count: 3
    That's low. We'll put lilly pilly on the watch list.

For any other situation, it should say:

    Which plant did you survey? forest starwort
    Count: 37
    Great! Recorded 37 forest starworts in this area.

<em><strong>Note</strong> how the plant name is always all lowercase in the output!</em>

**We won't test your program with fewer than 2 plants counted.**

© 2021 Grok Learning