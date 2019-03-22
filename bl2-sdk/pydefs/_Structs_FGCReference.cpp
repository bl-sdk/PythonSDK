#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGCReference(py::module &m)
{
    py::class_< FGCReference >(m, "FGCReference")
        .def_readwrite("m_object", &FGCReference::m_object)
        .def_readwrite("m_count", &FGCReference::m_count)
        .def_readwrite("m_statid", &FGCReference::m_statid)
  ;
}