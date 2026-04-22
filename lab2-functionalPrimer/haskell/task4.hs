ask :: String -> IO ()
ask prompt = do
    putStrLn prompt
    line <- getLine
    putStrLn ("you said: " ++ reverse line)
    if line == ""
    then ask prompt
    else if (line == "quit") then putStrLn("quitting..") --condition added for quitting
    else do
    putStrLn ("you said: " ++ reverse line)
    ask prompt --needed for repeated inputs

main :: IO ()
main =
  do
  let prompt = "please say something"
  ask prompt