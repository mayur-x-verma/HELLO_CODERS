const generatePassword = ({ length = 8, includeNumbers = true, includeSymbols = true }) => {
  const numbers = '0123456789';
  const symbols = '!@#$%^&*()_+-={}[]|:;"<>,.?/~`';

  let chars = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
  if (includeNumbers) chars += numbers;
  if (includeSymbols) chars += symbols;

  let password = '';
  for (let i = 0; i < length; i++) {
    const randomIndex = Math.floor(Math.random() * chars.length);
    password += chars[randomIndex];
  }

  return password;
};

export default generatePassword;
