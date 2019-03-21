#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxDataStoreSubscriber(py::object m)
{
    py::class_< UGFxDataStoreSubscriber,  UObject   >(m, "UGFxDataStoreSubscriber")
        .def_readwrite("VfTable_IUIDataStorePublisher", &UGFxDataStoreSubscriber::VfTable_IUIDataStorePublisher)
        .def_readwrite("Movie", &UGFxDataStoreSubscriber::Movie)
        .def("StaticClass", &UGFxDataStoreSubscriber::StaticClass, py::return_value_policy::reference)
        .def("SaveSubscriberValue", &UGFxDataStoreSubscriber::SaveSubscriberValue)
        .def("ClearBoundDataStores", &UGFxDataStoreSubscriber::ClearBoundDataStores)
        .def("GetBoundDataStores", &UGFxDataStoreSubscriber::GetBoundDataStores)
        .def("NotifyDataStoreValueUpdated", &UGFxDataStoreSubscriber::NotifyDataStoreValueUpdated)
        .def("RefreshSubscriberValue", &UGFxDataStoreSubscriber::RefreshSubscriberValue)
        .def("GetDataStoreBinding", &UGFxDataStoreSubscriber::GetDataStoreBinding)
        .def("SetDataStoreBinding", &UGFxDataStoreSubscriber::SetDataStoreBinding)
        .def("PublishValues", &UGFxDataStoreSubscriber::PublishValues)
          ;
}