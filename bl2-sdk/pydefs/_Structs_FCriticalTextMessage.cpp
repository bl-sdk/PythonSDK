#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCriticalTextMessage(py::object m)
{
    py::class_< FCriticalTextMessage >(m, "FCriticalTextMessage")
        .def_readwrite("Message", &FCriticalTextMessage::Message)
        .def_readwrite("Title", &FCriticalTextMessage::Title)
        .def_readwrite("DestroyTime", &FCriticalTextMessage::DestroyTime)
        .def_readwrite("DrawColor", &FCriticalTextMessage::DrawColor)
  ;
}