SELECT * 
FROM Cinema c 
WHERE c.id%2=1 and description!='boring'
ORDER BY rating DESC