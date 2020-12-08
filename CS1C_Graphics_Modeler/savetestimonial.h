#ifndef SAVETESTIMONIAL_H
#define SAVETESTIMONIAL_H

#include "shape.h"
#include "vector.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QMessageBox>

/*! \file savetestimonial.h
 *  \brief A file containing functionality to save user testimonials to an external file.
 *
 * The savetestimonials file contains a function to save all testimonials currently in the program to an external file. This allows
 * the testimonial data to persist between program executions.
 */

/* saveTestimonial */
/*!
 * \brief Function saves testimonials contained in passed QString object to the external file "testimonial.txt".
 *
 * The saveTestimonial function will open the file "testimonial.txt" and append the passed QString object contents to it. The
 * file will be saved and its contents will persist between executions.
 *
 * \param text is a constant QString object which holds the text to append to the testimonial file.
 */

void saveTestimonial(const QString text);

//QTextStream outputTestimonial();

#endif // SAVETESTIMONIAL_H
