#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIMultitypeScrollingList()
{
    class_< UIMultitypeScrollingList, bases< UInterface >  , boost::noncopyable>("UIMultitypeScrollingList", no_init)
        .def("StaticClass", &UIMultitypeScrollingList::StaticClass, return_value_policy< reference_existing_object >())
        .def("Move", &UIMultitypeScrollingList::Move)
        .def("SetRendererInfo", &UIMultitypeScrollingList::SetRendererInfo)
        .staticmethod("StaticClass")
  ;
}