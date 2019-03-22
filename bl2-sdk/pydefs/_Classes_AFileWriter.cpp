#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFileWriter(py::module &m)
{
    py::class_< AFileWriter,  AInfo   >(m, "AFileWriter")
        .def_readwrite("ArchivePtr", &AFileWriter::ArchivePtr)
        .def_readwrite("Filename", &AFileWriter::Filename)
        .def_readwrite("FileType", &AFileWriter::FileType)
        .def("StaticClass", &AFileWriter::StaticClass, py::return_value_policy::reference)
        .def("eventDestroyed", &AFileWriter::eventDestroyed)
        .def("Logf", &AFileWriter::Logf)
        .def("CloseFile", &AFileWriter::CloseFile)
        .def("OpenFile", &AFileWriter::OpenFile)
          ;
}