import React, { useState } from 'react';

const PasswordOptions = ({ onGeneratePassword }) => {
  const [length, setLength] = useState(8);
  const [includeNumbers, setIncludeNumbers] = useState(true);
  const [includeSymbols, setIncludeSymbols] = useState(true);

  const handleLengthChange = (event) => {
    setLength(event.target.value);
  };

  const handleIncludeNumbersChange = (event) => {
    setIncludeNumbers(event.target.checked);
  };

  const handleIncludeSymbolsChange = (event) => {
    setIncludeSymbols(event.target.checked);
  };

  const handleSubmit = (event) => {
    event.preventDefault();
    const options = { length, includeNumbers, includeSymbols };
    onGeneratePassword(options);
  };

  return (
    <form onSubmit={handleSubmit}>
      <div>
        <label htmlFor="length">Password length:</label>
        <input type="number" id="length" value={length} onChange={handleLengthChange} />
      </div>
      <div>
        <label htmlFor="includeNumbers">Include numbers:</label>
        <input type="checkbox" id="includeNumbers" checked={includeNumbers} onChange={handleIncludeNumbersChange} />
      </div>
      <div>
        <label htmlFor="includeSymbols">Include symbols:</label>
        <input type="checkbox" id="includeSymbols" checked={includeSymbols} onChange={handleIncludeSymbolsChange} />
      </div>
      <button type="submit">Generate Password</button>
    </form>
  );
};

export default PasswordOptions;


import React, { useState } from 'react';

const generatePassword = () => {
  const length = 12; // Length of the password
  const charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+<>?"; // Character set
  let password = "";
  for (let i = 0, n = charset.length; i < length; ++i) {
    password += charset.charAt(Math.floor(Math.random() * n));
  }
  return password;
}

const PasswordGenerator = () => {
  const [password, setPassword] = useState('');

  const handleClick = () => {
    const generatedPassword = generatePassword();
    setPassword(generatedPassword);
  }

  const handleCopy = () => {
    navigator.clipboard.writeText(password);
    alert('Password copied to clipboard!');
  }

  return (
    <div>
      <button onClick={handleClick}>Generate Password</button>
      {password && (
        <div>
          <input type="text" value={password} readOnly />
          <button onClick={handleCopy}>Copy to Clipboard</button>
        </div>
      )}
    </div>
  );
};

export default PasswordGenerator;
