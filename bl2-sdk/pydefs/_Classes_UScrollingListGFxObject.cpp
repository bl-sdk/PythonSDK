#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScrollingListGFxObject(py::module &m)
{
    py::class_< UScrollingListGFxObject,  UGFxObject   >(m, "UScrollingListGFxObject")
        .def("eventSetSelectedIndex", &UScrollingListGFxObject::eventSetSelectedIndex)
        .def("ScrollToIndex", &UScrollingListGFxObject::ScrollToIndex)
        .def("Init", &UScrollingListGFxObject::Init)
          ;
}