#ifndef MUSICTRANSITIONANIMATIONLABEL_H
#define MUSICTRANSITIONANIMATIONLABEL_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QLabel>
#include "musicglobaldefine.h"

class QPropertyAnimation;

/*! @brief The class of the label transition animation.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicTransitionAnimationLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MusicTransitionAnimationLabel(QWidget *parent = 0);
    /*!
     * Object contsructor.
     */
    ~MusicTransitionAnimationLabel();

    static QString getClassName();
    /*!
     * Get class object name.
     */

public Q_SLOTS:
    void setPixmap(const QPixmap &pix);
    /*!
     * Override the setPixmap function.
     */

private Q_SLOTS:
    void valueChanged(const QVariant &value);
    /*!
     * Animation value changed.
     */
    void animationFinished();
    /*!
     * Animation finished.
     */

protected:
    virtual void paintEvent(QPaintEvent *event) override;
    /*!
     * Override the widget event.
     */

    bool m_isAnimating;
    int m_currentValue;
    QPixmap m_currentPixmap, m_previousPixmap;
    QPropertyAnimation *m_animation;

};

#endif // MUSICTRANSITIONANIMATIONLABEL_H
