#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStorePublisher()
{
    class_< UUIDataStorePublisher, bases< UUIDataStoreSubscriber >  , boost::noncopyable>("UUIDataStorePublisher", no_init)
        .def("StaticClass", &UUIDataStorePublisher::StaticClass, return_value_policy< reference_existing_object >())
        .def("SaveSubscriberValue", &UUIDataStorePublisher::SaveSubscriberValue)
        .staticmethod("StaticClass")
  ;
}