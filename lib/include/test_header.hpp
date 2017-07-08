#pragma once

class Foo {
    unsigned m_foo;
public:
    Foo() : m_foo{42} {}
    unsigned getFoo() const;
};

