#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UScrollingListGFxObject()
{
    class_< UScrollingListGFxObject, bases< UGFxObject >  , boost::noncopyable>("UScrollingListGFxObject", no_init)
        .def("StaticClass", &UScrollingListGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSetSelectedIndex", &UScrollingListGFxObject::eventSetSelectedIndex)
        .def("ScrollToIndex", &UScrollingListGFxObject::ScrollToIndex)
        .def("Init", &UScrollingListGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}