#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxRawData(py::object m)
{
    py::class_< UGFxRawData,  UObject   >(m, "UGFxRawData")
        .def_readwrite("RawData", &UGFxRawData::RawData)
        .def_readwrite("ReferencedSwfs", &UGFxRawData::ReferencedSwfs)
        .def_readwrite("References", &UGFxRawData::References)
        .def_readwrite("UserReferences", &UGFxRawData::UserReferences)
        .def("StaticClass", &UGFxRawData::StaticClass, py::return_value_policy::reference)
          ;
}