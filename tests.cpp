#include "list_queue_libs .h"
#include "gtest/gtest.h"


TEST(Length, emptyList) {
queue *list;
list->init();
int l = list->lenghtS();
EXPECT_EQ(l, 0);
}

