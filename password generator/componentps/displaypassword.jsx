import React from 'react';

const PasswordDisplay = ({ password }) => {
  return (
    <div>
      <h2>Password:</h2>
      <p>{password}</p>
    </div>
  );
};

export default PasswordDisplay;
