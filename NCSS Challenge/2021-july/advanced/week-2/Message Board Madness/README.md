# Problem Statement

You have just landed a new job as a forum administrator, working for the Humbolt Academy for Aspiring Evil Geniuses. As part of your job description, you have to set up a ranking system for the Academy's forum.

They have given you the following rankings to set up, based on the number of upvotes that the user has earned for their posts.

| **Total Upvotes** | **Forum Ranking** |
| ----------------- | ----------------- |
| 0 | `'Insignificantly Evil'` |
| <20 | `'Cautiously Evil'` |
| <100 | `'Justifiably Evil'` |
| <500 | `'Wickedly Evil'` |
| ≥500 | `'Diabolically Evil'`|

The current forum is set up with a list of threads. Each thread is a dictionary with the following keys:

- title — a string
- tags — a list of strings
- posts — a list of posts

Here's an example thread:

    thread = {
        'title': 'Invade Manhatten, anyone?',
        'tags': ['world-domination', 'hangout'],
        'posts': [],
    }

Each post is a dictionary with the following keys:

- author — a string user name
- content — a longer string
- upvotes — an integer representing how useful this post was to all readers so far.

Here's an example post:

    post = {
        'author': 'Mr. Sinister',
        'content': "I'm thinking 9 pm?",
        'upvotes': 2,
    }

Write a function called `author_rankings` that takes a list of threads, and works out the total upvotes for all contributing authors, and their associated forum ranking.
Your function should return a list of 3-tuples: `(author, total upvotes, forum ranking)`. This list should be sorted first on upvotes (highest to lowest) with ties broken by author (lexicographical).

You should use the following template for your function, replacing `return your_list_here` with your code:

    def author_rankings(thread_list):
        # TODO: Determine (author, upvotes, ranking) over all threads.
        return your_list_here

We have given you a sample list of threads to start you off.

    report = author_rankings([
        {
            'title': 'Invade Manhatten, anyone?',
            'tags': ['world-domination', 'hangout'],
            'posts': [
                {
                    'author': 'Mr. Sinister',
                    'content': "I'm thinking 9 pm?",
                    'upvotes': 2,
                },
                {
                    'author': 'Mystique',
                    'content': "Sounds fun!",
                    'upvotes': 0,
                },
                {
                    'author': 'Magneto',
                    'content': "I'm in!",
                    'upvotes': 0,
                },
            ],
        }
    ])

Here is the author rankings report we expect for this example:

    print(report == [
        ('Mr. Sinister', 2, 'Cautiously Evil'),
        ('Magneto', 0, 'Insignificantly Evil'),
        ('Mystique', 0, 'Insignificantly Evil')
    ])
‎
    
    True

Here's an example with more than one chat thread:

    report = author_rankings([
        {
            'title': 'Invade Manhattan, anyone?',
            'tags': ['world-domination', 'hangout'],
            'posts': [
            {
                'author': 'Mr. Sinister',
                'content': "I'm thinking 9 pm?",
                'upvotes': 2,
            }
            ]
        },
        {
            'title': 'Interested in a weekly meetup?',
            'tags': ['introductions', 'hangout'],
            'posts': [
            {
                'author': 'Mystique',
                'content': "Sounds fun!",
                'upvotes': 0,
            },
            ],
            }
    ])

We would expect these author ranking over these 2 threads:

    print(report == [
        ('Mr. Sinister', 2, 'Cautiously Evil'), 
        ('Mystique', 0, 'Insignificantly Evil')
    ])
‎
    
    True

© 2021 Grok Learning