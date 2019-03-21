#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStoreSubscriber()
{
    class_< UUIDataStoreSubscriber, bases< UInterface >  , boost::noncopyable>("UUIDataStoreSubscriber", no_init)
        .def("StaticClass", &UUIDataStoreSubscriber::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClearBoundDataStores", &UUIDataStoreSubscriber::ClearBoundDataStores)
        .def("GetBoundDataStores", &UUIDataStoreSubscriber::GetBoundDataStores)
        .def("NotifyDataStoreValueUpdated", &UUIDataStoreSubscriber::NotifyDataStoreValueUpdated)
        .def("RefreshSubscriberValue", &UUIDataStoreSubscriber::RefreshSubscriberValue)
        .def("GetDataStoreBinding", &UUIDataStoreSubscriber::GetDataStoreBinding)
        .def("SetDataStoreBinding", &UUIDataStoreSubscriber::SetDataStoreBinding)
        .staticmethod("StaticClass")
  ;
}