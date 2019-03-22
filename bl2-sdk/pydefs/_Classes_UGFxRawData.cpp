#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxRawData(py::module &m)
{
    py::class_< UGFxRawData,  UObject   >(m, "UGFxRawData")
        .def_readwrite("RawData", &UGFxRawData::RawData)
        .def_readwrite("ReferencedSwfs", &UGFxRawData::ReferencedSwfs)
        .def_readwrite("References", &UGFxRawData::References)
        .def_readwrite("UserReferences", &UGFxRawData::UserReferences)
          ;
}