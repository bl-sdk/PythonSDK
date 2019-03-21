#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIResourceDataProvider()
{
    class_< UUIResourceDataProvider, bases< UUIPropertyDataProvider >  , boost::noncopyable>("UUIResourceDataProvider", no_init)
        .def_readwrite("VfTable_IUIListElementProvider", &UUIResourceDataProvider::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIResourceDataProvider::VfTable_IUIListElementCellProvider)
        .def("StaticClass", &UUIResourceDataProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventInitializeProvider", &UUIResourceDataProvider::eventInitializeProvider)
        .staticmethod("StaticClass")
  ;
}