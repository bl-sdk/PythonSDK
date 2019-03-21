#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIWillowStorable()
{
    class_< UIWillowStorable, bases< UInterface >  , boost::noncopyable>("UIWillowStorable", no_init)
        .def("StaticClass", &UIWillowStorable::StaticClass, return_value_policy< reference_existing_object >())
        .def("Put", &UIWillowStorable::Put)
        .def("Get", &UIWillowStorable::Get)
        .def("Swap", &UIWillowStorable::Swap)
        .staticmethod("StaticClass")
  ;
}