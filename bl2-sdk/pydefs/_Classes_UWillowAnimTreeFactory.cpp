#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimTreeFactory()
{
    class_< UWillowAnimTreeFactory, bases< UFactory >  , boost::noncopyable>("UWillowAnimTreeFactory", no_init)
        .def("StaticClass", &UWillowAnimTreeFactory::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}