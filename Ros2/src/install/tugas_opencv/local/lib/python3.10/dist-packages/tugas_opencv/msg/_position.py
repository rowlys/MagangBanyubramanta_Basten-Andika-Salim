# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tugas_opencv:msg/Position.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Position(type):
    """Metaclass of message 'Position'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tugas_opencv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tugas_opencv.msg.Position')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Position(metaclass=Metaclass_Position):
    """Message class 'Position'."""

    __slots__ = [
        '_red_x_pos',
        '_red_y_pos',
        '_blue_x_pos',
        '_blue_y_pos',
        '_yellow_x_pos',
        '_yellow_y_pos',
    ]

    _fields_and_field_types = {
        'red_x_pos': 'int32',
        'red_y_pos': 'int32',
        'blue_x_pos': 'int32',
        'blue_y_pos': 'int32',
        'yellow_x_pos': 'int32',
        'yellow_y_pos': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.red_x_pos = kwargs.get('red_x_pos', int())
        self.red_y_pos = kwargs.get('red_y_pos', int())
        self.blue_x_pos = kwargs.get('blue_x_pos', int())
        self.blue_y_pos = kwargs.get('blue_y_pos', int())
        self.yellow_x_pos = kwargs.get('yellow_x_pos', int())
        self.yellow_y_pos = kwargs.get('yellow_y_pos', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.red_x_pos != other.red_x_pos:
            return False
        if self.red_y_pos != other.red_y_pos:
            return False
        if self.blue_x_pos != other.blue_x_pos:
            return False
        if self.blue_y_pos != other.blue_y_pos:
            return False
        if self.yellow_x_pos != other.yellow_x_pos:
            return False
        if self.yellow_y_pos != other.yellow_y_pos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def red_x_pos(self):
        """Message field 'red_x_pos'."""
        return self._red_x_pos

    @red_x_pos.setter
    def red_x_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_x_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'red_x_pos' field must be an integer in [-2147483648, 2147483647]"
        self._red_x_pos = value

    @builtins.property
    def red_y_pos(self):
        """Message field 'red_y_pos'."""
        return self._red_y_pos

    @red_y_pos.setter
    def red_y_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_y_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'red_y_pos' field must be an integer in [-2147483648, 2147483647]"
        self._red_y_pos = value

    @builtins.property
    def blue_x_pos(self):
        """Message field 'blue_x_pos'."""
        return self._blue_x_pos

    @blue_x_pos.setter
    def blue_x_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_x_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'blue_x_pos' field must be an integer in [-2147483648, 2147483647]"
        self._blue_x_pos = value

    @builtins.property
    def blue_y_pos(self):
        """Message field 'blue_y_pos'."""
        return self._blue_y_pos

    @blue_y_pos.setter
    def blue_y_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_y_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'blue_y_pos' field must be an integer in [-2147483648, 2147483647]"
        self._blue_y_pos = value

    @builtins.property
    def yellow_x_pos(self):
        """Message field 'yellow_x_pos'."""
        return self._yellow_x_pos

    @yellow_x_pos.setter
    def yellow_x_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yellow_x_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'yellow_x_pos' field must be an integer in [-2147483648, 2147483647]"
        self._yellow_x_pos = value

    @builtins.property
    def yellow_y_pos(self):
        """Message field 'yellow_y_pos'."""
        return self._yellow_y_pos

    @yellow_y_pos.setter
    def yellow_y_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yellow_y_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'yellow_y_pos' field must be an integer in [-2147483648, 2147483647]"
        self._yellow_y_pos = value
