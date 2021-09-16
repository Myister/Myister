import unittest
from main import main_test


class MyTestCase(unittest.TestCase):
    def test_something(self):
        self.assertEqual(0.98,main_test())   #前面是预期 后面是实际运行的


if __name__ == '__main__':
    unittest.main()