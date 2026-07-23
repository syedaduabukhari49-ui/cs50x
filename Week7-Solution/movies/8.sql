-- 8. Names of people who starred in Toy Story
SELECT name FROM people WHERE id IN
(
    -- Select person IDs
    SELECT person_id FROM stars WHERE movie_id = (
        -- Find Toy Story's ID
        SELECT id FROM movies WHERE title = "Toy Story"
    )
);
