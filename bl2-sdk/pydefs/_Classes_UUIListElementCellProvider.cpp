#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIListElementCellProvider()
{
    class_< UUIListElementCellProvider, bases< UInterface >  , boost::noncopyable>("UUIListElementCellProvider", no_init)
        .def("StaticClass", &UUIListElementCellProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}