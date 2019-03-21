#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocalInventoryRefreshMessage()
{
    class_< ULocalInventoryRefreshMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("ULocalInventoryRefreshMessage", no_init)
        .def("StaticClass", &ULocalInventoryRefreshMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClientInventoryRefresh", &ULocalInventoryRefreshMessage::ClientInventoryRefresh)
        .staticmethod("StaticClass")
  ;
}