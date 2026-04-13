#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("can add tasks") {
    TodoList list;
    list.add("Buy milk");
    list.add("Buy eggs");
    REQUIRE(list.all() == "Buy milk (incomplete)\nBuy eggs (incomplete)\n");
}
TEST_CASE("can complete a task") {
    TodoList list;
    list.add("Buy milk");
    list.add("Buy eggs");
    list.complete("Buy eggs");
    REQUIRE(list.complete() == "Buy eggs\n");
}
TEST_CASE("can show incomplete tasks") {
    TodoList list;
    list.add("Buy milk");
    list.add("Buy eggs");
    list.complete("Buy eggs");
    REQUIRE(list.incomplete() == "Buy milk\n");
}
TEST_CASE("can clear the list") {
    TodoList list;
    list.add("Buy milk");
    list.add("Buy eggs");
    list.clear();
    REQUIRE(list.all() == "The list is empty.\n");
}