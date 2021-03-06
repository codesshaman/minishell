/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:24:51 by einterdi          #+#    #+#             */
/*   Updated: 2022/05/29 15:15:43 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MINISHELL_H
# define MINISHELL_H

# include "../libft/libft.h"
# include "buildin.h"
# include <stdio.h> // printf, strerror, perror,
# include <stdlib.h> // malloc, free, exit, getenv,
# include <unistd.h> // write, access, read, close, fork, getcwd, chdir, unlink,  execve, dup, dup2, pipe, isatty, ttyname, ttyslot,
# include <fcntl.h> // open,
# include <signal.h> // signal, sigaction, sigemptyset, sigaddset, kill,
# include <dirent.h> // opendir, readdir, closedir,
# include <sys/wait.h> //wait, waitpid, wait3, wait4,
# include <sys/stat.h> // stat, lstat, fstat,
# include <sys/ioctl.h> // ioctl,
# include <termios.h> //  tcsetattr, tcgetattr,
# include <term.h> // tgetent, tgetflag, tgetnum, tgetstr, tgoto, tputs
# include <readline/readline.h> //readline, rl_on_new_line, rl_replace_line
# include <readline/history.h> //rl_clear_history, add_history, rl_redisplay

#endif
