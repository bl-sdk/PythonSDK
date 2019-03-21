#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxDataStoreSubscriber()
{
    class_< UGFxDataStoreSubscriber, bases< UObject >  , boost::noncopyable>("UGFxDataStoreSubscriber", no_init)
        .def_readwrite("VfTable_IUIDataStorePublisher", &UGFxDataStoreSubscriber::VfTable_IUIDataStorePublisher)
        .def_readwrite("Movie", &UGFxDataStoreSubscriber::Movie)
        .def("StaticClass", &UGFxDataStoreSubscriber::StaticClass, return_value_policy< reference_existing_object >())
        .def("SaveSubscriberValue", &UGFxDataStoreSubscriber::SaveSubscriberValue)
        .def("ClearBoundDataStores", &UGFxDataStoreSubscriber::ClearBoundDataStores)
        .def("GetBoundDataStores", &UGFxDataStoreSubscriber::GetBoundDataStores)
        .def("NotifyDataStoreValueUpdated", &UGFxDataStoreSubscriber::NotifyDataStoreValueUpdated)
        .def("RefreshSubscriberValue", &UGFxDataStoreSubscriber::RefreshSubscriberValue)
        .def("GetDataStoreBinding", &UGFxDataStoreSubscriber::GetDataStoreBinding)
        .def("SetDataStoreBinding", &UGFxDataStoreSubscriber::SetDataStoreBinding)
        .def("PublishValues", &UGFxDataStoreSubscriber::PublishValues)
        .staticmethod("StaticClass")
  ;
}