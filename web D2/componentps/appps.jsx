import React, { useState } from 'react';
import PasswordDisplay from './PasswordDisplay';
import PasswordOptions from './PasswordOptions';
import generatePassword from './generatePassword';

const PasswordGenerator = () => {
  const [password, setPassword] = useState('');

  const handleGeneratePassword = (options) => {
    const newPassword = generatePassword(options);
    setPassword(newPassword);
  };

  return (
    <div>
      <h1>Random Password Generator</h1>
      <PasswordDisplay password={password} />
      <PasswordOptions onGeneratePassword={handleGeneratePassword} />
    </div>
  );
};

export default PasswordGenerator;
