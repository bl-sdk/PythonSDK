#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFileWriter()
{
    class_< AFileWriter, bases< AInfo >  , boost::noncopyable>("AFileWriter", no_init)
        .def_readwrite("ArchivePtr", &AFileWriter::ArchivePtr)
        .def_readwrite("Filename", &AFileWriter::Filename)
        .def_readwrite("FileType", &AFileWriter::FileType)
        .def("StaticClass", &AFileWriter::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &AFileWriter::eventDestroyed)
        .def("Logf", &AFileWriter::Logf)
        .def("CloseFile", &AFileWriter::CloseFile)
        .def("OpenFile", &AFileWriter::OpenFile)
        .staticmethod("StaticClass")
  ;
}