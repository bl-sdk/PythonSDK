#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UReceivedItemMessage()
{
    class_< UReceivedItemMessage, bases< ULocalItemMessage >  , boost::noncopyable>("UReceivedItemMessage", no_init)
        .def_readwrite("ReceivedItem", &UReceivedItemMessage::ReceivedItem)
        .def_readwrite("SelfReceivedItem", &UReceivedItemMessage::SelfReceivedItem)
        .def("StaticClass", &UReceivedItemMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetItemString", &UReceivedItemMessage::GetItemString)
        .staticmethod("StaticClass")
  ;
}