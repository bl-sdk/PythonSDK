#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecogUserData(py::module &m)
{
    py::class_< FRecogUserData >(m, "FRecogUserData")
        .def_readwrite("ActiveVocabularies", &FRecogUserData::ActiveVocabularies)
        .def_readwrite("UserData", &FRecogUserData::UserData)
  ;
}